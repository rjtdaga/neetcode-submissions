class MinStack:

    def __init__(self):
        self.arr = []

    def push(self, val: int) -> None:
        self.arr.insert(0, val)

    def pop(self) -> None:
        self.arr.pop(0)

    def top(self) -> int:
        return self.arr[0]

    def getMin(self) -> int:
        return min(self.arr)
        
