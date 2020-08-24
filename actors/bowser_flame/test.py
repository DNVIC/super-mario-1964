import re
import glob


def averagecolor(string):
    trimstring = string[1:-1]
    trimstring = trimstring.split(',')
    r = trimstring[0]
    g = trimstring[1]
    b = trimstring[2]
    rdec = int(r,16)
    gdec = int(g[1:], 16)
    bdec = int(b[1:], 16)
    avg = (rdec + gdec + bdec)/3
    hexavg = hex(round(avg))
    return "{" + hexavg + ", " + hexavg + ", " + hexavg + ", " + trimstring[3] + "}"


for path in glob.glob("./**/*.c", recursive=True):
    print(path)
    file = open(path, mode="r")

    regex = "{0x.., 0x.., 0x.., 0x..}"
    linelist = file.readlines()
    filelist = []
    index = 0
    indexlist = []
    for line in linelist:
        if re.search(regex, line):
            filelist.append(line)
            indexlist.append(index)
        index += 1
    file.close


    index = 0

    for line in filelist:
        string = re.search(regex, line)
        string = averagecolor(string.group(0))
        line = re.sub(regex, string, line)
        filelist[index] = line
        index += 1

    file2 = open(path, mode="w")


    index = 0
    print(indexlist)
    for line in filelist:
        linelist[indexlist[index]] = line
        index += 1
        
    
    file2.writelines(linelist)
    file2.close


    index = 0




#test = re.search("{0x.., 0x.., 0x.., 0x..}", filelist[10])
#print(test.group(0))

#print(re.sub("{0x.., 0x.., 0x.., 0x..}", averagecolor(test.group(0)), filelist[10]))