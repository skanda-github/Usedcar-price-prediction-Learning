import streamlit as st
import pickle


# ---- Title & Icon ----
st.set_page_config(page_title = "Prediction Page", page_icon = ":globe_with_meridians:")

# ---- HIDE STREAMLIT STYLE ----
hide_st_style = """
            <style>
            #MainMenu {visibility: hidden;}
            footer {visibility: hidden;}
            header {visibility: hidden;}
            .css-18e3th9 {
                    padding-top: 0rem;
                    padding-bottom: 10rem;
                    padding-left: 5rem;
                    padding-right: 5rem;
                }
            </style>
            """
st.markdown(hide_st_style, unsafe_allow_html = True)

model = pickle.load(open('model.pkl', 'rb'))

st.text('')
st.title("Car Price Prediction")
st.text('')

st.text('')
km = st.number_input('Kilometers Driven', 0, 1000000)
st.text('')

st.text('')
years = st.number_input('Number of Years Used', 0, 100)
st.text('')

st.text('')
str_fuel = st.selectbox('Select Fuel Type', ['CNG', 'Diesel', 'Eletric', 'LPG', 'Petrol'])

if str_fuel == 'CNG':
    diesel, electric, lpg, petrol = 0, 0, 0, 0
if str_fuel == 'Diesel':
    diesel, electric, lpg, petrol = 1, 0, 0, 0
if str_fuel == 'Eletric':
    diesel, electric, lpg, petrol = 0, 1, 0, 0
if str_fuel == 'LPG':
    diesel, electric, lpg, petrol = 0, 0, 1, 0
if str_fuel == 'Petrol':
    diesel, electric, lpg, petrol = 0, 0, 0, 1

ans = list((diesel, electric, lpg, petrol))
# st.info(ans)
st.text('')

# Owner

st.text('')
str_value = st.selectbox('Select Seller Type', ['Dealer', 'Individual', 'Trustmark Dealer'])

if str_value == 'Dealer':
    Individual, Trustmark_Dealer = 0, 0
if str_value == 'Individual':
    Individual, Trustmark_Dealer = 1, 0
if str_value == 'Trustmark Dealer':
    Individual, Trustmark_Dealer = 0, 1

ans = list((Individual, Trustmark_Dealer))
# st.info(ans)
st.text('')

st.text('')
str_value = st.selectbox('Select Transmission Type', ['Automatic', 'Manual'])

if str_value == 'Automatic':
    Manual = 0
if str_value == 'Manual':
    Manual = 1

# st.info(Manual)
st.text('')

st.text('')
str_fuel = st.selectbox('Select Fuel Type', ['First Owner', 'Fourth & Above Owner', 'Second Owner', 'Test Drive Car',
                                             'Third Owner'])                                           

if str_fuel == 'First Owner':
    Fourth_And_Above_Owner, Second_Owner, Test_Drive_Car, Third_Owner = 0, 0, 0, 0
if str_fuel == 'Fourth & Above Owner':
    Fourth_And_Above_Owner, Second_Owner, Test_Drive_Car, Third_Owner  = 1, 0, 0, 0
if str_fuel == 'Second Owner':
    Fourth_And_Above_Owner, Second_Owner, Test_Drive_Car, Third_Owner  = 0, 1, 0, 0
if str_fuel == 'Test Drive Car':
    Fourth_And_Above_Owner, Second_Owner, Test_Drive_Car, Third_Owner  = 0, 0, 1, 0
if str_fuel == 'Third Owner':
    Fourth_And_Above_Owner, Second_Owner, Test_Drive_Car, Third_Owner  = 0, 0, 0, 1

ans = list((Fourth_And_Above_Owner, Second_Owner, Test_Drive_Car, Third_Owner))
# st.info(ans)
st.text('')

st.text('')
if st.button('Predict'):
    st.text('')
    result = model.predict([[km, years, diesel, electric, lpg, petrol, Individual, Trustmark_Dealer, Manual,
                             Fourth_And_Above_Owner, Second_Owner, Test_Drive_Car, Third_Owner]])
    result = round(result[0],2)

    if result <= 0:
        st.warning("Sorry you cannot sell this car")
    else:
        st.success("Predicted Price is ₹ " + str(result))