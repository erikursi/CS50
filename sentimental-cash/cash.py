# TODO
from cs50 import get_float


# Promts the user for a number od cents
def get_dollars():
    dollars = -1
    while not dollars >= 0:
        dollars = get_float("Change owed: ")
    return dollars


# Calculates the number of cents (1 dollar = 100 cents)
def calculate_cents(dollars):
    return dollars * 100


# Calculates the number of quarters (25 cents)
def calculate_quarters(cents):
    quarters = cents // 25
    return quarters


# Calculates the number of dimes (10 cents)
def calculate_dimes(cents):
    dimes = cents // 10
    return dimes


# Calculates the number of nickels (5 cents)
def calculate_nickels(cents):
    nickels = cents // 5
    return nickels


# Calculates the number of pennies (1 cent)
def calculate_pennies(cents):
    pennies = cents
    return pennies


# Ask how many cents the customer is owed
dollars = get_dollars()
cents = calculate_cents(dollars)

# Calculate the number of quarters to give the customer
quarters = calculate_quarters(cents)
cents = cents - quarters * 25

# Calculate the number of dimes to give the customer
dimes = calculate_dimes(cents)
cents = cents - dimes * 10

# Calculate the number of nickels to give the customer
nickels = calculate_nickels(cents)
cents = cents - nickels * 5

# Calculate the number of pennies to give the customer
pennies = calculate_pennies(cents)
cents = cents - pennies * 1

# Sum coins
coins = quarters + dimes + nickels + pennies

# Print total number of coins to give the customer
print(int(coins))

