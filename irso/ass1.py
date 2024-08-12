'''import numpy as np
s1=np.array([1,21,3,36,1,31,1.])
#print(type(s1))
s2=np.arange(0,6)
print(s2)
#bb=np.reshape(s2,(2,3))
#cc=np.all(s1>10)
#print(cc)
s1[s1>5]=2
print(s1)
print(s2[:])'''
import numpy as np
S3=np.array([[1,2,3,4,5],
            [6,7,8,9,10]])
for i in range(0,2):
    for j in range(0,5):
        print([i,j])
    print("\n")
print(S3)
