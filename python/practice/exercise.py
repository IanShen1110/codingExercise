import pandas as pd

def exercise_1():
    print("Exercise 1")
    print("Import the Pandas library and read a CSV file into a DataFrame.")
    print("What is the code to import the Pandas library?")
    answer = input()
    if answer == "import pandas as pd":
        print("Correct!")
    else:
        print("Incorrect. The correct answer is 'import pandas as pd'.")
        
def exercise_2():
    print("\nExercise 2")
    print("Select and display the first 5 rows of the DataFrame.")
    print("What is the code to display the first 5 rows of the DataFrame 'df'?")
    answer = input()
    if answer == "df.head()":
        print("Correct!")
    else:
        print("Incorrect. The correct answer is 'df.head()'.")
        
def exercise_3():
    print("\nExercise 3")
    print("Select and display the last 5 rows of the DataFrame.")
    print("What is the code to display the last 5 rows of the DataFrame 'df'?")
    answer = input()
    if answer == "df.tail()":
        print("Correct!")
    else:
        print("Incorrect. The correct answer is 'df.tail()'.")
        
def exercise_4():
    print("\nExercise 4")
    print("Get the basic statistics (mean, median, mode, standard deviation, etc.) for all the columns in the DataFrame.")
    print("What is the code to get the basic statistics for all the columns in the DataFrame 'df'?")
    answer = input()
    if answer == "df.describe()":
        print("Correct!")
    else:
        print("Incorrect. The correct answer is 'df.describe()'.")
        
def exercise_5():
    print("\nExercise 5")
    print("Select and display a specific column of the DataFrame.")
    print("What is the code to display the column 'column_name' from the DataFrame 'df'?")
    answer = input()
    if answer == "df['column_name']":
        print("Correct!")
    else:
        print("Incorrect. The correct answer is 'df['column_name']'.")
        
def exercise_6():
    print("\nExercise 6")
    print("Drop a specific column from the DataFrame.")
    print("What is the code to drop the column 'column_name' from the DataFrame 'df'?")
    answer = input()
    if answer == "df.drop('column_name', axis=1, inplace=True)":
        print("Correct!")
    else:
        print("Incorrect. The correct answer is 'df.drop('column_name', axis=1, inplace=True)'.")
        
def exercise_7():
    print("\nExercise 7")
    print("Add a new column to the DataFrame and fill it with data.")
    print("What is the code to add a new column 'column_name' to the DataFrame 'df' filled with data 'data'?")
    answer = input()
    if answer == "df['column_name'] = data":
        print("Correct!")
    else:
        print("Incorrect. The correct answer is 'df['column_name'] = data'.")
        
def exercise_8():
    print("\nExercise 8")
    print("Group the data in the DataFrame by one or more columns and compute the sum, mean, or other statistics for each group.")
    print("What is the code to group the data in the DataFrame 'df' by the column 'column_name' and compute the mean for each group?")
    answer = input()
    if answer == "df.groupby('column_name').mean()":
        print("Correct!")
    else:
        print("Incorrect. The correct answer is 'df.groupby('column_name').mean()'.")
        
def exercise_9():
    print("\nExercise 9")
    print("Filter the DataFrame based on certain conditions and display the results.")
    print("What is the code to filter the DataFrame 'df' based on the condition 'column_name > value' and display the results?")
    answer = input()
    if answer == "df[df['column_name'] > value]":
        print("Correct!")
    else:
        print("Incorrect. The correct answer is 'df[df['column_name'] > value]'.")
        
def exercise_10():
    print("\nExercise 10")
    print("Sort the data in the DataFrame based on one or more columns and display the results.")
    print("What is the code to sort the DataFrame 'df' based on the column 'column_name' in ascending order and display the results?")
    answer = input()
    if answer == "df.sort_values(by='column_name')":
        print("Correct!")
    else:
        print("Incorrect. The correct answer is 'df.sort_values(by='column_name')'.")
        
if __name__ == '__main__':
    exercise_1()
    exercise_2()
    exercise_3()
    exercise_4()
    exercise_5()
    exercise_6()
    exercise_7()
    exercise_8()
    exercise_9()
    exercise_10()
