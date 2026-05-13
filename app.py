import streamlit as st
import joblib
import numpy as np

# Load trained AI model
model = joblib.load('predictive_model.pkl')

# Dashboard Title
st.title("AI Predictive Maintenance System")

# Input Sliders
temp = st.slider("Temperature", 0, 120, 40)
voltage = st.slider("Voltage", 0, 30, 24)
current = st.slider("Current", 0, 30, 5)
rpm = st.slider("RPM", 0, 5000, 3000)
vibration = st.slider("Vibration", 0.0, 5.0, 0.5)

# Predict Button
if st.button("Predict"):

    sample = np.array([[temp, voltage, current, rpm, vibration]])

    result = model.predict(sample)

    st.subheader("Machine Status")

    st.success(result[0])

    if result[0] == "Failure":
        st.error("Machine Failure Warning!")

    elif result[0] == "Warning":
        st.warning("Maintenance Required")