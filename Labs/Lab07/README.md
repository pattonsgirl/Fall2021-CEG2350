# Lab 07 - NOT FINALIZED

- [Lab Procedure](#Lab-Procedure)
- [Part 1 - Virtualize the Machine](#Part-1---Virtualize-the-Machine)
- [Part 2 - Playground](#Part-2---Playground)
- [Hints - Screenshots and markdown](#Hints---Screenshots-and-markdown)
- [Submission](#Submission)
- [Rubric](#Rubric)

## Lab Procedure

In your terminal, head to your repository (the folder named `ceg2350-yourgithubusername).

Create a new directory, `Lab07`

Create a file named `Lab07.md` [based on the template](LabTemplate.md).
   - [Raw version of LabTemplate.md](https://raw.githubusercontent.com/pattonsgirl/Fall2021-CEG2350/main/Labs/Lab07/LabTemplate.md)

For each part below, you will be asked to do an action or answer a question.  The actions are going to be commands - you will write the command you used as "answers" to the action requested.  You are allowed to use multiple commands to solve an action.  Just write down all that were needed to complete.  Check with the TAs if you need clarification.

If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later. 

## Part 1 - inode nerd



## Part 2 - Unused resources

1. What drive letter and partition number are mounted and where are they mounted to?

2. Is there another drive listed in `/dev/`?

3. Make a partition table on this drive.

4. Make a partition on this drive

5. Make a filesystem on the partition

6. Mount the partition to a folder in your home directory

7. Make yourself the owner of the folder and all files in it

8. Create some files (with and without text) and directories

9. Unmount the partition

10. Can you still access the files and folders?

11. Mount the partition again, then delete a file (preferably one with text in it)

12. Unmount the partition and run `strings` on the partition.  Does your file content still exist?

13.  What does this mean about deleting files?  Do some internet digging and see if there is a way to truly delete data on a disk (using the command line - no powertools)

## Extra Credit - Make a filesystem on a file

This is neat because it is not too far off from what happened when you created the virtual disk on your virtual machine.

1. Use the `dd` command to create a file named reserved that is filled with 0's.  Set `bs` to 1024 bytes, 

## Submission

1. Verify that your GitHub repo has a `Lab07` folder with at minimum:
   - `Lab07.md`

2. In the Pilot Dropbox, paste the URL to the `Lab07` folder in your GitHub repo
    - URL should look like: https://github.com/WSU-kduncan/ceg2350-YOURGITHUBUSERNAME/tree/main/Lab07

## Rubric

- Part 1 - 1 pt per question - 8 pts total
- Part 2 - 1 pt per question - 4 pts total


