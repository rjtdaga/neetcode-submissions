class PrefixTree:

    def __init__(self):
        self.arr = []

    def insert(self, word: str) -> None:
        self.arr.append(word)

    def search(self, word: str) -> bool:
        if word in self.arr:
            return True
        else:
            return False

    def startsWith(self, prefix: str) -> bool:
        for i in range(len(self.arr)):
            word = self.arr[i]
            len_prefix = len(prefix)
            if len(word) >= len_prefix:
                subword = word[0:len_prefix]
                if subword == prefix:
                    return True
        return False
        