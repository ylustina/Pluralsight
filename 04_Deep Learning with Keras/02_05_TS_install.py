# To verify that Tensorflow is working
import tensorflow as tf

# Print version
print("Tensorflow version is: " + str(tf.__version__))

# Verify session works
hello = tf.constant('Hello from TensorFlow!')
sess = tf.Session()
print(sess.run(hello))
