class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in range(9):
            row1 = board[i]
            row = [item for item in row1 if item != "."]
            column1 = [row[i] for row in board]
            column = [item for item in column1 if item != "."]
            if len(row)!= len(set(row)):
                return False
            if len(column)!= len(set(column)):
                return False
            box1 = board[int(int(i/3)*3):int(int(i/3)*3+3)]
            box = [row[int((i%3)*3):int((i%3)*3+3)] for row in box1]
            box_row = box[0] + box[1] + box[2]
            box_row2 = [item for item in box_row if item != "."]
            if len(box_row2)!= len(set(box_row2)):
                return False
        return True
