# 🦥 oh, this just enforce keyword arguments not the key names
def example_function(**kwargs):
    print(kwargs)
    for key, value in kwargs.items():
        print(f"{key}: {value}")


# Calling the function with a dictionary using dictionary unpacking
arguments = {"arg1": 42, "arg2": "hello", "arg3": True}
example_function(**arguments)

## okey
example_function(**{"name": "A Function!"})

# dict must be unpacked
example_function({"name": "A Function!"})
# TypeError: example_function() takes 0 positional arguments but 1 was given
