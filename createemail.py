def tao_email(ho_ten):
    ho_ten = ho_ten.title()  # Chuyển tất cả các từ trong họ tên thành chữ in hoa ở đầu mỗi từ
    ten_dem, ho = ho_ten.split()[-2:], ho_ten.split()[0]
    
    chu_cai_dau_ten_dem = ten_dem[0][0].lower() if ten_dem[0] else ''
    chu_cai_dau_ho = ho[0].lower() if ho else ''

    email = f"{ten_dem[-1].lower()}{chu_cai_dau_ho}{chu_cai_dau_ten_dem}@gmail.com"
    return email

# Nhập họ và tên từ người dùng
i=0
a=int(input("Import how many gmail you want to create"))
while (i<a):
 ho_ten = input("Your full name ")
 email = tao_email(ho_ten)
 print("Email:", email)
 i+=1
