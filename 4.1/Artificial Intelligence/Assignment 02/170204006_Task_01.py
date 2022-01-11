def Sum(first_term, interval, num_of_terms):
    if num_of_terms == 0:
        return 0
    else:
        return first_term + Sum((first_term + interval), interval, num_of_terms - 1)


R = int(input("How many times to check: "))
for i in range(R):
    print("Iteration :", i+1)
    first_term = int(input("Enter 1st Number :"))
    interval = int(input("Interval :"))
    num_of_terms = int(input("Total Number of Terms:"))
    print("\nSum of Series is :", Sum(first_term, interval, num_of_terms))

