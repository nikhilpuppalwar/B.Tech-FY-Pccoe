name=["nikhil",'om','kundan','rohan','sanket','swayam']
print(len(name))
print('using append fuction to add a string at the last in list')

name.append('kaivalya')
print(len(name))
print(name[1:5])
for names in name:
    print(names.upper())
print('using extend fuction to add a two list ')
name.extend(['vivek','tanisqh','kartik'])
print(len(name))
print('using insert fuction to add a string in list')
name.insert(2,'puppalwar')
for names in name:
    print(names)
print(len(name))