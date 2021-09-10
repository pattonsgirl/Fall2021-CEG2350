# Quiz 1

1. Write a command that will show me all files, including hidden files, in a directory
    - `ls` is the base command to do a list of the contents of a directory
    - For the `ls` command, `-a` is a flag that will show all contents, including hidden files
    - For the `ls` command, `-l` is a flag that will list contents and their permissions, but won't include hidden files by itself.

2. When you log on to the AWS instance (that thing you ssh into) what is your username?
    - `ubuntu`
    - There are two places that state this:
        - In your `ssh` command, you say `ssh -i keyname ubuntu@IP`
            - In front of the @ is `ubuntu`, the user you are logging in as
        - Once you are logged on to the system, the start of the line is `ubuntu@ip-10-0-0-25:~ $`
            - In front of the @ is `ubuntu`, the user you are logged in as

3. What does the following command do? `chmod u+r bubbles.txt`
    - Gives the user owner of the file read permissions to `bubbles.txt`
    - `u` user owner of the file
    - `+` adds a permission 
    - `r` translates to read permissions

4. What command switches from one directory to another?
    - `cd`
    - `mv` moves content from one directory to another (is among what it can do)

5. We have a key we use to connect to the AWS instance.  Is the key we have locally, that we use with the `ssh` command, public or private?
    - The key we have locally is our private key.
    - If you `cat` the file, you will see it is surrounded with BEGIN and END PRIVATE KEY
    - public keys are put on the system we are connecting to.  
        - For example, the AWS system we connect /to/ has a copy of our public key.  
        - We gave GitHub a public key of the keypair we made to we can connect /to/ GitHub

6. Name an operating system.
    - Windows / Windows 10 / Windows Vista
    - Mac OS / iOS / Mac XNU
    - Linux / Ubuntu / Android
    - Unix

7. Fill in the blank:  If I need to run a command with administrative privileges, I can put ____ in front of the command to have it run with those priviledges.  For example: `____ vim filename`
    - `sudo`
    - This will invoke your admin privilege (if you are allowed to use them) for your user.
    - `root` itself is a user.  You can switch to being the `root` user with `su root`
    - `ssh` is a command that opens a secure shell / secure connection to the remote system (in this case, our AWS system)
    - `chmod` is a command to change permissions.  You can use `chmod` to change read, write, and execute permissions as well as the user and group
    - `su` lets you switch user - think log in to a different account

8. What is the password to view Webex recordings (all of them)?
    - Ceg2350-F21