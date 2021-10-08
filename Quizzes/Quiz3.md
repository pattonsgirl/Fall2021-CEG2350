# Quiz 3

Note on notation:  Sometimes you will see backticks in commands I give you (I will try to be careful about cleanup).  They are markdown notations.  If confused, text me or the TAs and ask if you are interpreting the question correctly.

1. Identify a piece of computer hardware (no external devices: mouse, keyboards, printers, etc.)
    - motherboard
    - CPU
    - RAM
    - GPU
    - Disk (SSD, HDD, NVME)
    - Network interface card

2. On the command line, I type the following command and expect a script to run:
`bubbles`
The output is: 
`bubbles: command not found`
What is wrong?
    - folder script is in is not in PATH
    - script is not executable (at all or by the current user)
    - ./bubbles would be a solution IF the script is executable AND I am in the right directory.
    - Other answers: alias not in .bashrc; check spelling

3. On the command line, I type the following command and expect a script to run:
`bubbles`
The output is: 
`bubbles: command not found`
Given that `bubbles` is an existing script, suggest a solution to making this command work.
    - add execution permissions (for all or for the correct user)
    - add folder `bubbles` is in to the PATH variable (then can reference by name)
    - go to the correct folder and use `source bubbles` (this will work as long as the script is correctly written, execute permissions or not)
    - use the path to the script to run it


4. For what user(s) will the following script output "Goats"?
```
if [[ $EUID -ne 0 ]]; then
    echo "Ducks"
else
    echo "Goats"
fi
```
    - Only root (EUID 0)

5. The bootloader, perhaps once an option has been selected from the boot menu, loads the ____ into RAM
    - kernel
    - The OS is a set of processes that the kernel starts after being loaded into RAM
    - The BIOS is loaded into RAM when the PC turns on - the BIOS then uses the partition table on the disk to find the bootloader, which then loads the kernel into RAM.  

6. What bootloader does your system use?
    - Macs: boot.efi / BootX
    - Windows: BootMGR (anything else, like NTLDR and I would be concerned)
    - Linux: GRUB / GRUB2, LILO
    - Other: Clover
    - UEFI is not a bootloader, it is a program stored on a ROM chip on the motherboard.  It checks hardware functionality before the system is booted.
    - EFI is where the bootloader is stored.  You could think of it as a bootable partition.  It relies on the motherboard having a UEFI ROM chip instead of the older BIOS

7. T/F MBR partition tables only support disk sizes of up to 2 TB.
    - True.  
    - Partition tables are stored within a space on a disk - they don't get to "expand".  2 TB was the maximum disk size the MBR partition table could store information about
    - Today, it is common and best practice to use GPT partition tables

8. T/F SSD and NVME drives are examples of volatile memory.
    - False.
    - SSDs and NVME drives fall into the category of persistent memory - memory that is stored and continues to be stored if powered off.  These are classified as non-volatile types of memory

