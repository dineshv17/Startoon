import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt('./Data_2.txt')  
maxima = []
minima = []

# Iterate through the data
for i in range(1, len(data)-1):
    if data[i] > data[i-1] and data[i] > data[i+1]:
        maxima.append(i)
    if data[i] < data[i-1] and data[i] < data[i+1]:
        minima.append(i)

# Plotting the data and peaks
plt.plot(data, label='Signal')
plt.scatter(maxima, data[maxima], color='red', label='Maxima')
plt.scatter(minima, data[minima], color='blue', label='Minima')
plt.legend()
plt.show()
