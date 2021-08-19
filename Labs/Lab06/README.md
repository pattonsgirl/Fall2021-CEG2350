# Lab 06 - NOT FINALIZED

## Lab Procedure

**For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later.  
`ssh` in to your AWS environment. If you've forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

1. Go to the folder in which you cloned your Git repository for this course.
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/` depending on your setup
2. Create a directory called `Lab06`
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab06` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab06` depending on your setup
3. In this directory, create a file called `README.md`
4. This `README.md` file is where you will put your answers to this lab. I recommend creating two connections to your Linux AWS so you can keep the `README.md` file open while you expirement with the lab.
   - At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email

```

## Part 1: Self Discovery (5 pts)

Find out the following information about your personal system. Write the answers to the information requested.

- You can use the manufactuers website / manuals
- Windows users, I recommend `msinfo`
- You should _not_ need to install additional programs to find this information. If someone tells you to install something, run away.

1. BIOS version / mode. (1 pt)
2. CPU brand and info. (0.5 pt)
3. Installed memory size. (0.5 pt)
4. Virtual memory size. Does you system have a pagefile or a swapfile? What does this mean? (1 pt)
5. File system on installed disk(s). (0.5 pt)
6. Number of partitions. Which partition is your primary partition? (0.5 pt)
7. Get to your UEFI BIOS. Note what you did to access it. Then run away. (1 pt)
   - If you don't own the machine (and therefore may not be able to access the BIOS), lookup information about the machine and what steps would have worked.
   - Note for Chromebook users: Document what your tried and what you learned about your system.
   - Note for Mac users: [This article](https://www.techwalla.com/articles/macbook-efi-access) may help

## Part 2: Exploration (5 pts)

Use your AWS / Ubuntu system to discover the following information.

1. Read `/boot/grub/menu.lst`. What boot options would the `grub` menu present? (1 pt)
   - Note: since we are using a remote connection, we will never see / interact with the `grub` menu. But it is still there.
2. Using the command `df -h`, determine how much disk space is used and how much space is free. (1 pt)
3. Run the command `sudo parted -l` to answer the following:
   - What is the primary disk in the `/dev` folder? (.33 pt)
   - What type of partition table is the device using? (.33 pt)
     - Hint: If it looks unfamilar, use Google to find a more common name
   - What file system is used by the device? (.33 pt)
4. Use `lshw` to find the following:
   - BIOS version (.33 pt)
   - CPU brand and info (.33 pt)
   - Memory size (.33 pt)
5. Does this system have a swap file (use virtual memory)? Write how you checked. (1 pt)
   - [Hint](https://unix.stackexchange.com/questions/23072/how-can-i-check-if-swap-is-active-from-the-command-line)

## Part 3: The Git Part (1 pt)

1. Use `git` commands to `add`, `commit` and `push` the `Lab06` folder to GitHub.

## Submission

In your GitHub repository, select the green `Code` button then select `Download ZIP`. Upload this zip file to the Pilot Dropbox.

In the `Comment` area in the Pilot Dropbox, copy URL / link to the repository corresponding to the project your are submitting.
