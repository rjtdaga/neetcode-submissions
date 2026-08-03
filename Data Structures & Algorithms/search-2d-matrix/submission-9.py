class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        # first find the row number can be in:
        N_row = len(matrix)
        N_col = len(matrix[0])
        row1 = 0
        row2 = N_row
        # Perform iterative cutting of half regions based on target 
        # and value of rows
        curr_row1 = 0
        curr_row2 = N_row-1
        if target == matrix[curr_row1][0] or target == matrix[curr_row2][0]:
            return True
        while  curr_row2-curr_row1 > 1:
            new_ind = curr_row1 + int((curr_row2-curr_row1)/2)
            if target > matrix[new_ind][0]:
                curr_row1 = new_ind
            elif target < matrix[new_ind][0]:
                curr_row2 = new_ind
            else:
                return True
        if target > matrix[curr_row2][0]:
            row1 = curr_row2
        elif target > matrix[curr_row1][0] and target < matrix[curr_row2][0]:
            row1 = curr_row1
        elif target < matrix[curr_row1][0]:
            return False
        else:
            return True
        if N_row == 2:
            if target < matrix[0][0]:
                return False
            elif target > matrix[0][0] and target < matrix[1][0]:
                row1 = 0
            elif target > matrix[1][0]:
                row1 = 1
            else:
                return True
        print(row1)
        # the target is in row1
        # Need to do the same for column
        curr_col1 = 0
        curr_col2 = N_col-1
        while  curr_col2-curr_col1 > 1:
            new_ind = curr_col1 + int((curr_col2-curr_col1)/2)
            if target > matrix[row1][new_ind]:
                curr_col1 = new_ind
            elif target < matrix[row1][new_ind]:
                curr_col2 = new_ind
            else:
                return True
        if target == matrix[row1][curr_col1]:
            return True
        if target == matrix[row1][curr_col2]:
            return True
        return False