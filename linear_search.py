def linear_search(arr: iter, n: int) -> int:
    for i, v in enumerate(arr):
        if v == n:
            return i
    return -1
if __name__ == "__main__":
    lst: list = [1, 3, 6, 12, 45, 66, 120, 124, 55, 9]
    result: int = linear_search(list, 66)
    if result != -1:
        print(f"Found At Index {result}")
    else:
        print("Not Found")
        
  
