class TimeMap:

    def __init__(self):
        self.arr = []  

    def set(self, key: str, value: str, timestamp: int) -> None:
        data = [key, value, timestamp]
        self.arr.append(data)

    def get(self, key: str, timestamp: int) -> str:
        for i in range(len(self.arr)-1,-1,-1):
            if self.arr[i][0] == key and self.arr[i][2] <= timestamp:
                return self.arr[i][1]
        return ""
