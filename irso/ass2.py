import numpy as np

S3 = np.array([[1, 2, 3, 4, 5],
               [6, 7, 8, 9, 10]])

for i in range(S3.shape[0]):
    for j in range(S3.shape[1]):
        print(S3[i, j], end=' ')
    print("\n")
