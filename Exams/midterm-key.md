# CEG 2350 Midterm - Fall 2021

## Written Response

1. What is the `PATH` environment variable and how does the system utilize it?
    - PATH holds a list of directories were executables exist.  Executables can be either scripts or compiled programs
    - Given a command, the system looks through the folders in PATH to see if any contain the command given, then executes the corresponding executable (if it was found)

2. Describe the process that happens from when the computer is powered on to the operating system being usable.
    - BIOS / UEFI runs POST
    - Looks for disks with partitions - selects a default disk
    - Partition table is used to find bootloader
    - bootloader knows location of kernel
    - kernel loaded into RAM
    - kernel starts operating system processes

3. What is virtual memory and why is it useful?
    - Virtual memory is the combined use of RAM and disk and mapping where processes are between the two.
    - It is useful for hybernation / sleep mode, since the volatile memory (RAM) can offload to the non-volatile memory (disk) so that all process can be resumed instead of restarted.
    - It is also useful to create "additional" RAM - you're system can run more processes than if it only had RAM, which is finite.
    - Virtual memory combines the fast physical memory available on RAM with the slow, long term storage of the hard drive to provide more memory to programs than otherwise would be available. Data that frequently gets modified will be kept in RAM, whereas data that only gets modified occasionally will be moved to the hard drive while not in use, freeing up more RAM for programs to use. Although the portion of virtual memory that exists on RAM and the portion that exists on the hard drive are physically on two different pieces of hardware, programs see this as one large continuous volume of memory. A page file keeps track of how data has been split between the RAM and hard drive.


4. Provide at least two advantages of GPT partition tables over MBR partiton tables.
    - support disk sizes larger than 2TB
        - You could use MBR for a greater than 2TB disk - but you'd only be able to use 2TB...
    - supports more than 4 partitions
    - stores only the partition table & stores multiple copies of the partition table on the disk
    - boot loader exists in separate EFI partition
    - can be used on older motherboard that use BIOS (due to just-in-case MBR partition)

5. For the ssh command, what does the -i option do?
    - specifies the location of the private key file
    - identity_file
    - Selects a file from which the identity (private key) for public key authentication is read.

6. What does the following command do: `sort groceries.txt | uniq > list.txt`
    - sorts groceries.txt (alphabetically), pipes the output of the sort into uniq, where only uniq entries will be listed, then saves the final output of the sorted, uniq valued list to list.txt
        - list.txt will be overwritten each time this command is run
    - Sorts each line of groceries.txt alphabetically, then deletes all duplicate lines, and dumps the remaining lines into a file called list.txt in the working directory. If list.txt doesn't exist before this command is run, it will be created, if it does already exist it will be overwritten. The original file groceries.txt will not be affected by this operation.


7. For the following regular expression, provide a phrase that WOULD and a phrase the WOULD NOT match the specified pattern: `b{1,2}[an]+s?`
- Subset of matches:
```
bananas
bans
band
baseball
banana
ban
bas
bbanans
bns
band
BANANAS
bananananananas
banjos
bbaaaaaaaaa
bas
bananbs
bannnnaaaaaaas
```
- Subset of non-matches
```
BANANAS
any letter but b followed by the pattern
```
- b repeated one or two times, a or n repeated one or more times, s optional

## Written Commands / Code

1. In a local git repository, a new file is created called pop.txt  Write the commands needed to add the file to my remote repository on GitHub  
    - git add pop.txt
        - `git add .` is nice, but might bite on day when you need to explicity add some files but not others. 
    - git commit -a (write message here)
    - git push
    + lots of use of git status ;)

2. Craft an alias so that when I type hello (and hit enter) the output is "Good day!"
    - alias hello='echo "Good day!"'
    - alias hello='echo Good day!'
    - alias hello="echo Good day!"
    - quotes not utilized - -10%
    - Incorrect:
        - alias hello=echo "Good day!"
            -bash: alias: Good day!: not found

3. Modify the permissions of the file provided the information below so that griff is the user and can read, write, and execute, dogs is the group associated and can only read, and others have no permissions.
`-rwxrwxrwx  1 sue devs 1.7K Jun  2 22:01 test`
- chmod 740 test
- chmod u=rwx,g=r,o= test
- chown griff test
- chgrp dogs test
- chown griff:dogs test



4. What command will let you fetch changes that exist on a remote repository (GitHub) and merge them with the local repository?
    - git pull
    - fetch will fetch content, will not merge.  pull does both

5. Write a script that check if a file named output.txt exists and has write permissions.  If the condition is true, write "output" to the file.  Otherwise, check if the file exists and output "exists but cannot write".  Else, output "file does not exist".
```
if [[ -w output.txt ]]
then
    echo "output" > output.txt
elif [[ -e output.txt ]]
    echo "exists but cannot write"
else
    echo "file does not exist"
fi
```

## Short Answer / Fill in the Blank

1. In virtual machines, what manages shared hardware resources, such as CPU, RAM, and disk operations, between the host OS and the guest OS(s)?
    - hypervisor

2. Which is loaded first - the operating system or the kernel?
    - kernel
    - The operating system is a set of processes that the kernel manages.  The OS does not start until the kernel checks off on things.  When you install an os, it does come with a kernel, but as far as which runs first it is the kernel

3. The ____ file in the user's home directory holds configurations for their bash shell, including aliases
    - .bashrc / .bash_profile
    - .profile hols environment configurations independent of shells
    - bin is a folder that, if it exists in the user's home directory, will be added to $PATH (if .profile is configured to do so)

4. bash, sh, powershell, cmd all all examples of ____
    - shells
    - command line interface / scripting languages
    - not terminals.  WSL2 Ubuntu is a terminal that uses the bash shell.  "terminal", moba xterm, etc - these are all terminals.  Shells can be selected (if other options are installed) within terminals

5. Using a basic definition of filesystems, a filesystem is a list of files and their corresponding ____, which hold details on which block(s) the file is stored.
    - inode
    - DROPPED question from grade

## True / False

1. The contents of private key files are uploaded to services / servers, like GitHub.  When we connect to these services / servers, we need to specify the public key located on our system.
    - False
    - The contents of the public key were given to GitHub

2. In regular expressions, the + (plus) will match one or more occurrences of a pattern while a * (asterisk) will match zero or more occurrences of a pattern.
    - True

3. Spaces and special characters in file and folder names are the best.
    - False
    - you need to remember the correct use of quotes and some systems (GitHub) don't handle special characters in paths / file names well at all.