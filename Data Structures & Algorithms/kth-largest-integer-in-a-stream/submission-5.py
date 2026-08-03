class KthLargest:

    def __init__(self, k: int, nums: List[int]):
        nums.sort(reverse=True)
        self.arr = nums[0:k]
        self.k = k

    def add(self, val: int) -> int:
        if self.k > len(self.arr):
            self.arr.append(val)
            self.arr.sort(reverse = True)
            return self.arr[-1]
        if val <= self.arr[self.k-1]:
            return self.arr[self.k-1]
        else:
            # Need to find which index the value would take
            if val >= self.arr[0]:
                self.arr.insert(0,val)
                self.arr.pop(self.k)
                return self.arr[self.k-1]
            ind1 = 0
            ind2 = self.k-1
            while ind2 - ind1 > 1:
                if self.arr[ind1]==val:
                    self.arr.insert(ind1,val)
                    self.arr.pop(self.k)
                    return self.arr[self.k-1]
                elif self.arr[ind2]==val:
                    self.arr.insert(ind2,val)
                    self.arr.pop(self.k)
                    return self.arr[self.k-1]
                else:
                    ind = int((ind1 + ind2)/2)
                    if val == self.arr[ind]:
                        self.arr.insert(ind,val)
                        self.arr.pop(self.k)
                        return self.arr[self.k-1]
                    elif val < self.arr[ind1] and val > self.arr[ind]:
                        ind2 = ind
                    elif val > self.arr[ind2] and val < self.arr[ind]:
                        ind1 = ind
                    
            self.arr.insert(ind2, val)
            self.arr.pop(self.k)
            final_ans = self.arr[self.k-1]
            return final_ans
                    

            
