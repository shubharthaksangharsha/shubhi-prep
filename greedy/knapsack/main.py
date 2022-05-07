def take_input():
    capacity = int(input('Enter the capacity of the knapsack: '))
    n = int(input('Enter the total number of items: '))
    items = []
    for i in range(n):
        print(f'Enter the {n - i} items i.e profit, weight(seperated by space): ')
        items.append((i+1, tuple(map(int, input().split()))))
    print(items)    
    return items, capacity , n 

def rearrange_list(items):
    profit_weight = [(items[i][1][0]/items[i][1][1], i + 1) for i in range(items)]
    profit_weight = sorted(profit_weight, reverse=True)
    return profit_weight

def calculate(items, capacity, profit_weight):
    for x in profit_weight:
        pass
    pass
items, capacity, n = take_input()
profit_weight = rearrange_list(items)
print(profit_weight)


    

