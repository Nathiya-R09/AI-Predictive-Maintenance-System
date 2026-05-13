import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score
import joblib

# Load dataset
data = pd.read_csv('machine_data.csv')

# Select input columns
X = data[['Temp','Voltage','Current','RPM','Vibration']]

# Output column
y = data['Fault']

# Split data
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42)

# Create AI model
model = RandomForestClassifier()

# Train AI model
model.fit(X_train, y_train)

# Test prediction
predictions = model.predict(X_test)

# Accuracy
accuracy = accuracy_score(y_test, predictions)

print("Accuracy:", accuracy)

# Save model
joblib.dump(model, 'predictive_model.pkl')

print("AI Model Created Successfully")