
import os
import numpy as np
import matplotlib.pyplot as plt
from sklearn.datasets import make_blobs

os.environ['TF_CPP_MIN_LOG_LEVEL']='2'


# Helper functions

# Plotting the data on a figure
def plot_data(pl, X, y):
    # plot class where y==0
    pl.plot(X[y==0, 0], X[y==0, 1], 'ob', alpha=0.5)
    # plot class where y==1
    pl.plot(X[y==1, 0], X[y==1, 1], 'xr', alpha=0.5)
    pl.legend(['0', '1'])
    return pl




