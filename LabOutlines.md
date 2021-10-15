# Lab 01
- AWS Setup
    - Create account / register
    - hook in to classrom
    - create ssh key
    - put private key in proper spot
    - change permissions
    - create an instance
    - sign in to system with public ip
- GitHub classrooms setup
    - hook in to github classroom
    - create ssh key for authentication
    - give github public key(s)
- Try git commands
    - create key pair on AWS system (use defaults)
    - clone to AWS system
    - use markdown template
        - plug in answers from txt file

# Lab 02
- files
- folders
- permissions
- other users
- using groups
- playing with root and sudo

# Lab 03
- aliases
- IO redirection
- scripting intro
- regex intro
- ec is colorize text

# Lab 04
- regex
    - add sed OR grep exercise for cleaning up a file?
- scripting
    - PATH, .profile, and export
    - parsing data 
        - emails from list of output
            - from survey, has mix of emails.  Want just @wright.edu emails
        - data from csv? - data needs to be formatted columar style
    - FUTURE?
    - use usernames from emails to bulk do something?
        - create files with username
        - put a `fortune` in each file
    - ec is check for contents before overwrite

# Lab 05
- explore your own hardware
- explore the VM resources on AWS
- script to scrape for info on linux / bash

# Lab 06
- install VirtualBox 
    - Mac M1 peeps - UMT is free, Parallels discounted through Cats
- install OS on VM
- On Linux VM 
    - change desktop background
    - open browser and navigate to site
    - install VSCode
    - ssh in to AWS instance

# Lab 07
- Mount xvdb, create partition table, create partition, add to /etc/fstab? - NEW
- use strings to explore what "deletion" means on something on a disk
- inodes & hard / symbolic links
- ec: Create a folder and layer on a filesystem

# Lab ##
- tar'ing
- ~/.ssh/config
- create key pair for bob (authorized_keys)
- sftp
- checksums

# Lab 08
- create a script that runs infinitely
- run the script "normally" and kill via PID
- run the script with bg and kill via job ID
- run in screen
- marco/polo script
    - pay attention to PATH and file locations
- EC is create and solve a merge conflict

# Lab 05
- Write source code
- compile source code
- debug an error with GDB - NEW
- write a makefile
- ec is add dependent file (function / library that "main" relies on)
- git branches

# Lab 09
- explore your internet connection and the AWS internet connection
- play with port forwarding using jupyter notebooks
- Run a python web server on port 4444, find PID using lsof
- EC - hello world in jupyter notebook
- EC - echo a message over a port, access message via public IP or curl localhost

# Lab 10
- install anaconda and analyze tarball within
- tar a folder, use sftp to transfer file, check checksum on both ends, then un-tar
- create a new SSH keypair set - goal is to mess with SSH essential files
- EC - install ninvaders