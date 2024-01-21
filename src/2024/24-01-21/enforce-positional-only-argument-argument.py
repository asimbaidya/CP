# / -  this enforce that all arguments before it must be passed positionally
# else
# SyntaxError: positional argument follows keyword argument


def custom_function(x, y, /, z):
    result = x + y + z
    return result


result = custom_function(1, 2, 3)
print(result)

# SyntaxError: positional argument follows keyword argument
# result = custom_function(x=1, y=2, z=3)

result = custom_function(1, 2, z=3)
