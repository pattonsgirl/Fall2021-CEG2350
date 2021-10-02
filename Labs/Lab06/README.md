# Lab 06 - NOT FINALIZED

- [Lab Procedure](#Lab-Procedure)
- [Part 1 - Self Discovery](#Part-1---Self-Discovery)
- [Part 2 - AWS Instance Exploration](#Part-2---AWS-Instance-Exploration)
- [Part 3 - Info Finder](#Part-3---Info-Finder)
- [Extra Credit - `date` stamp](#Extra-Credit---`date`-stamp)
- [Submission](#Submission)
- [Rubric](#Rubric)

## Lab Procedure

In your terminal, head to your repository (the folder named `ceg2350-yourgithubusername).

Create a new directory, `Lab06`

Create a file named `Lab06.md` [based on the template](LabTemplate.md).
   - [Raw version of LabTemplate.md](https://raw.githubusercontent.com/pattonsgirl/Fall2021-CEG2350/main/Labs/Lab06/LabTemplate.md)

For each part below, you will be asked to do an action or answer a question.  The actions are going to be commands - you will write the command you used as "answers" to the action requested.  You are allowed to use multiple commands to solve an action.  Just write down all that were needed to complete.  Check with the TAs if you need clarification.

If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later. 

## Part 1 - Virtualize the Machine

We have been talking about the boot process and computer parts and installing operating systems, but it's hard to give you a computer to build and feel this out - so how about a virtual one!

You will need a computer that has CPU virtualization enabled.  The lab machines & open lab machines in Russ are all good candidates (and may have VirtualBox already installed).  For your own machine, you may need to enable CPU virtualization in your BIOS.

- Windows, Linux, Mac users:
   - [Download and install VirtualBox](https://www.virtualbox.org/wiki/Downloads)
   - Pick your host OS when installing (for example, I would pick "Windows hosts")
- Mac M1 Users:
   - Install either:
      - Parallels - Wright State offers a student discount on Parallels
         - [Get Parallels via the Hub](https://www.wright.edu/information-technology/software-purchases-for-personal-use)
      - [UTM](https://mac.getutm.app/) - free if you click "Download".  You can support the developers by paying through the App Store.
   - the instuctions below should apply generically, but if you are having trouble Shree has Mac experience.  Posting in the general chat on Discord may also get you help

1. Create a Virtual Machine with the following minimum specifications:
   - Type: Linux
   - Version: Other Linux (64-bit)
   - 2 GB RAM
   - 10 GB disk space
2. Download an iso (installation image) for a Linux distubution of your choice.  State which Linux distrubition you picked
   - Ubuntu Desktop is a safe bet
   - Linux Mint, Elementary, Kali, Pop OS - or check distro watch
   - I will warn that if your selection "isn't working" you should try Ubuntu and move on with life
3. Start your machine and select your iso (installation image)
4. Go through the installation process for your chosen Linux distribution
   - For ease right now, I would select "Erase and install" - however that is phrased
   - Some OSes will have default partition settings that do not play well with only 10GB
      - You can, in these cases, manually create the root `/` partition to extend over the whole disk
   - You do not need to encrypt your disk, unless that is your preference
5. Remove installation media: pick your method
   - After a successful install, go to Settings and change your boot order to boot from disk first
   - After a successful install, go to Settings and remove any disks besides your virtual disk
6. Confirm that when you turn your machine on, the OS starts, not the installation media
   - A good hint here is that the log in screen comes up
6. Download [VirtualBox Extension Pack](https://download.virtualbox.org/virtualbox/6.1.26/Oracle_VM_VirtualBox_Extension_Pack-6.1.26.vbox-extpack) to your host.  Launch

## Part 2 - 

1. In your virtual machine, change your desktop background
2. In your virtual machine, open a web browser and go to a neat website (or just Pilot)
3. 



## Submission

1. Verify that your GitHub repo has a `Lab06` folder with at minimum:
   - `Lab06.md`
   - an `images` folder (with your screenshots inside)


2. In the Pilot Dropbox, paste the URL to the `Lab06` folder in your GitHub repo
    - URL should look like: https://github.com/WSU-kduncan/ceg2350-YOURGITHUBUSERNAME/tree/main/Lab06

## Rubric

- Part 1 - 1 pt per question - 9 pts total
- Part 2 - 1 pt per question - 7 pts total