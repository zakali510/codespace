import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import codecademylib3_seaborn


# Load the dataset
coffee = pd.read_csv('starbucks_customers.csv')

# Extract the 'age' column from the dataset
ages = coffee['age']

# Calculate the range of ages
min_age = min(ages)
max_age = max(ages)
print("Age Range:", max_age - min_age)

# Calculate the mean age
mean_age = np.mean(ages)

# Center the ages around the mean
centered_ages = ages - mean_age

# Plot a histogram of the centered ages
plt.hist(centered_ages)
plt.show()