import os

path = r"C:\Users\sussato\Desktop\test.txt"

if os.path.exists(path):
    print(f"The path: {path} | exist")
    print(f"File removed successfully!")

    with open(r"C:\Users\sussato\Desktop\test.txt", "r", encoding="utf-8") as file:
        content = file.read()
    print(f"the file you deleted left you a message: {content}")

    os.remove(path)

else:
    print(f"The path: {path} | doesn't exist")