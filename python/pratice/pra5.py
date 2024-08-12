name=['nikhil', 'om', 'puppalwar', 'kundan', 'rohan', 'sanket', 'swayam', 'kaivalya', 'vivek', 'tanisqh', 'kartik']
print(name[-5:-1])
name_index=(name.index('rohan'))
print(name_index)
try:
    vijay_index=name.index('vijay')
except:
    vijay_index='name vijay is not found in list'
print(vijay_index)
index=0
while index<len(name):
    print(name[index])
    index+=1

name_sort=name.sort()
print("the sortesd list is {}".format(name))
  
for namess in range(0,len(name),2):
    print(name[namess])
