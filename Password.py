#These code will create random passwords for you 
import random
print('Your password:')
chars='ab09dw12%4nTYwd$#1*do0pkd(&@bK#$lmJ&()?#@iwueQdaBH'
password=''
for x in range(16):
  password += random.choice(chars)
print(password)
