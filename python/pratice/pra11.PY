n=open('test.txt','w')

text=n.write('hello my name4 is nikhil pupalwar ')
print(text)
n.close()
pp=open('test.txt','r' )
text1=pp.read()
print(text1)
pp.close()

with open('test.txt','a') as bb:
    bb.write(' what are you doing')

pp1=open('test.txt','r' )
text11=pp1.read()
print(text11)
pp1.close()
