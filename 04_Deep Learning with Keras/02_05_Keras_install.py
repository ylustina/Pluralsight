# Keras imports
import numpy as np
from keras import backend as kbe

# Test Keras - backend interaction
data = kbe.variable(np.random.random((4, 2)))  # Creates a 4x2 tensor of random numbers
zero_data = kbe.zeros_like(data)  # Creates a 4x2 tensor of zeros
print(kbe.eval(zero_data))  # Evaluates the zero_data and prints results

