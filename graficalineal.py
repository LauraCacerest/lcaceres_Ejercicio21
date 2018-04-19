import numpy as np
import matplotlib.pyplot as plt

datos=np.loadtxt('bdlineal.txt')

x=datos[:,0]
y=datos[:,1]

plt.figure()
plt.plot(x,y)
plt.savefig('bd1.png')
plt.show()
