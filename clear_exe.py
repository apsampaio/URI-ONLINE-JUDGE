import os

CPP_FOLDER = os.getcwd() + "\\CPP"

for file in os.listdir(CPP_FOLDER):
    if ".exe" in file:
        os.remove(CPP_FOLDER + "\\" + file)
