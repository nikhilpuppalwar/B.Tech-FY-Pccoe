nkk=open('C:\Users\ASUS\OneDrive\Desktop\practice\test.txt', 'r')
print('current position: {}'.format(nkk.tell()))
print(nkk.read())

print('current position: {}'.format(nkk.tell()))
print(nkk.read())

nkk.seek(0)
print('current position: {}'.format(nkk.tell()))
print(nkk.read())