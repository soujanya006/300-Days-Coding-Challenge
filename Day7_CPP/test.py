import numpy as np

def convolve_column_wise(input_matrix, filter_matrix, stride=1):
    """
    Perform a 2D convolution operation column-wise on the input matrix using the given filter.
    
    Parameters:
    - input_matrix: 2D numpy array, the input matrix.
    - filter_matrix: 2D numpy array, the filter matrix.
    - stride: integer, the stride of the convolution.
    
    Returns:
    - output_matrix: 2D numpy array, the result of the convolution.
    """
    # Input dimensions
    input_height, input_width = input_matrix.shape
    
    # Filter dimensions
    filter_height, filter_width = filter_matrix.shape
    
    # Output dimensions
    output_height = int((input_height - filter_height) / stride) + 1
    output_width = int((input_width - filter_width) / stride) + 1
    
    # Initialize the output matrix
    output_matrix = np.zeros((output_height, output_width))
    
    # Perform the convolution, iterating column-wise
    for x in range(output_width):
        for y in range(output_height):
            # Extract the current "column patch"
            current_patch = input_matrix[y * stride:y * stride + filter_height,
                                         x * stride:x * stride + filter_width]
            # Perform element-wise multiplication and sum
            conv_sum = np.sum(current_patch * filter_matrix)
            output_matrix[y, x] = conv_sum
            
    return output_matrix

# Hardcoded 6x6 input matrix
input_matrix = np.array([
    [1, 2, 3, 4, 5, 6],
    [7, 8, 9, 10, 11, 12],
    [13, 14, 15, 16, 17, 18],
    [19, 20, 21, 22, 23, 24],
    [25, 26, 27, 28, 29, 30],
    [31, 32, 33, 34, 35, 36]
])

# 3x3 Filter
filter_matrix = np.array([
    [-1, 0, 1],
    [-2, 0, 2],
    [-1, 0, 1]
])

# Perform the convolution column-wise
output_matrix = convolve_column_wise(input_matrix, filter_matrix, stride=1)

print("Output matrix after column-wise convolution:")
print(output_matrix)
