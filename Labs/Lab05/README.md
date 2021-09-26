# Lab 05 - NOT FINALIZED

- [Lab Procedure](#Lab-Procedure)
- [Part 1 - Regular Expressions](#Part-1---Regular-Expressions)
- [Part 2 - .profile and PATH](#Part-2---.profile-and-PATH)
- [Part 3 - Parsing Data](#Part-3---Parsing-Data)
- [Submission](#Submission)
- [Rubric](#Rubric)

## Lab Procedure

## Lab Procedure

In your terminal, head to your repository (the folder named `ceg2350-yourgithubusername).

Create a new directory, `Lab05`

This lab will have you creating input files, scripts, and output files.  All of your work should be found here.

Same questions will need you to write anwers in `Lab05.md` the [LabTemplate.md is here](LabTemplate.md).
   - [Raw version of LabTemplate.md](https://raw.githubusercontent.com/pattonsgirl/Fall2021-CEG2350/main/Labs/Lab05/LabTemplate.md)

For each part below, you will be asked to do an action or answer a question.  The actions are going to be commands - you will write the command you used as "answers" to the action requested.  You are allowed to use multiple commands to solve an action.  Just write down all that were needed to complete.  Check with the TAs if you need clarification.

If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later. 

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

## Part 3 - Info Finder

- file with list of commands that get system information
- option to run only core commands
- generates report with name based on date

## Submission

1. Verify that your GitHub repo has a `Lab05` folder with at minimum:
   - `parser`
   - your input file
   - `clean-emails.txt`
   - `Lab04.md`

2. In the Pilot Dropbox, paste the URL to the `Lab05` folder in your GitHub repo
    - URL should look like: https://github.com/WSU-kduncan/ceg2350-YOURGITHUBUSERNAME/tree/main/Lab05

## Rubric

- Part 1 - 1 pt per question
- Part 2 - 1 pt per question
