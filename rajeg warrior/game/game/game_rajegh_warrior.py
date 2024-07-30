import os
import random
import time
from colorama import init, Fore, Style
import getpass
import map_rajegh
import fight_mechanism
import Player
import loading

init()


def Map():
    os.system("cls")
    print(f"{Fore.MAGENTA}++++++++++++++++++++++++")
    print(f"========= Map ==========")
    print(f"++++++++++++++++++++++++{Style.RESET_ALL}\n")
    time.sleep(1)
    print(f"{Fore.BLUE}1. Hilichurl Camp")
    print("2. Mitachurl Camp")
    print(f"3. Fatui Camp{Style.RESET_ALL}")
    print(f"{Fore.RED}4. Abbys{Style.RESET_ALL}")
    print(f"{Fore.BLUE}5. Back to Main menu\n{Style.RESET_ALL}")
    map_choice = input(f"{Fore.BLUE}Choose Where To Teleport : ")

    if map_choice == "1":
        map_rajegh.Hilichurl_camp()
    if map_choice == "2":
        map_rajegh.Mitachurl_camp()
    if map_choice == "3":
        map_rajegh.Fatui_camp()
    if map_choice == "4":
        map_rajegh.Abbys()
    else:
        os.system("cls")
        print("Returning to menu")
        loading.progress_bar()
        time.sleep(1)
        menu_player()


def Backpack():
    os.system("cls")
    print("Item On your Iventory :\n")
    time.sleep(1)
    print("Weapon : \n")
    for item in Player.weapon:
        time.sleep(1)
        print(item)
    getpass.getpass("\nPress Enter To Go To Menu !")
    menu_player()


def Market():
    os.system("cls")
    print(f"{Fore.RED}Hello Welcome To The Market....")
    time.sleep(1)
    print(f"Need Something ??\n{Style.RESET_ALL}")
    time.sleep(1)
    print(
        f"{Fore.CYAN}(Note Buy Weapon Means You Lose Your Current Weapon){Style.RESET_ALL}"
    )
    print(f"{Fore.WHITE}1. Common Bow   (+10 Attack)\t\t   (25 Mora){Style.RESET_ALL}")
    print(f"{Fore.YELLOW}2. Rare Bow     (+50 Attack)\t\t   (40 Mora){Style.RESET_ALL}")
    print(f"{Fore.WHITE}3. Common Sword (+10 Attack)\t\t   (25 Mora){Style.RESET_ALL}")
    print(f"{Fore.YELLOW}4. Rare Sword   (+50 Attack)\t\t   (40 Mora){Style.RESET_ALL}")
    print(
        f"{Fore.MAGENTA}5. Gacha Weapon (1% Chance Legendary Bow/Sword ) (10 Mora){Style.RESET_ALL}"
    )
    print(f"{Fore.RED}q. Exit\n")

    pilihan_M = input("What's your choice? : ")

    # Store temporary changes
    temp_mora = Player.mora
    temp_atk = Player.atk
    temp_weapon = Player.weapon.copy()

    if pilihan_M == "1" and Player.mora >= 25:
        Player.mora -= 25
        Player.atk += 10
        if Player.weapon:
            replace_weapon = input(
                "\nYou already have a weapon. Do you want to replace it? (y/n): "
            )
            if replace_weapon.lower() == "y":
                old_weapon = Player.weapon.pop()
                print(f"You discarded your old weapon ({old_weapon})")
                Player.weapon.append("Common bow")
            else:
                print("\nYou chose to keep your current weapon.")

                Player.mora = temp_mora
                Player.atk = temp_atk
                Player.weapon = temp_weapon
                time.sleep(1.5)
                menu_player()
                return
        else:
            Player.weapon.append("Common bow")
        print("\nThanks Rajegh warrior")
        time.sleep(1.5)
        menu_player()
    elif pilihan_M == "2" and Player.mora >= 40:
        Player.mora -= 40
        Player.atk += 50
        if Player.weapon:
            replace_weapon = input(
                "\nYou already have a weapon. Do you want to replace it? (y/n): "
            )
            if replace_weapon.lower() == "y":
                old_weapon = Player.weapon.pop()
                print(f"You discarded your old weapon ({old_weapon})")
                Player.weapon.append("Rare bow")
            else:
                print("\nYou chose to keep your current weapon.")

                Player.mora = temp_mora
                Player.atk = temp_atk
                Player.weapon = temp_weapon
                time.sleep(1.5)
                menu_player()
                return
        else:
            Player.weapon.append("Rare bow")
        print("\nThanks Rajegh warrior")
        time.sleep(1.5)
        menu_player()
    elif pilihan_M == "3" and Player.mora >= 25:
        Player.mora -= 25
        Player.atk += 10
        if Player.weapon:
            replace_weapon = input(
                "\nYou already have a weapon. Do you want to replace it? (y/n): "
            )
            if replace_weapon.lower() == "y":
                old_weapon = Player.weapon.pop()
                print(f"You discarded your old weapon ({old_weapon})")
                Player.weapon.append("Common Sword")
            else:
                print("\nYou chose to keep your current weapon.")

                Player.mora = temp_mora
                Player.atk = temp_atk
                Player.weapon = temp_weapon
                time.sleep(1.5)
                menu_player()
                return
        else:
            Player.weapon.append("Common Sword")
        print("\nThanks Rajegh warrior")
        time.sleep(1.5)
        menu_player()
    elif pilihan_M == "4" and Player.mora >= 40:
        Player.mora -= 40
        Player.atk += 50
        if Player.weapon:
            replace_weapon = input(
                "\nYou already have a weapon. Do you want to replace it? (y/n): "
            )
            if replace_weapon.lower() == "y":
                old_weapon = Player.weapon.pop()
                print(f"You discarded your old weapon ({old_weapon})")
                Player.weapon.append("Rare Sword")
            else:
                print("\nYou chose to keep your current weapon.")

                Player.mora = temp_mora
                Player.atk = temp_atk
                Player.weapon = temp_weapon
                time.sleep(1.5)
                menu_player()
                return
        else:
            Player.weapon.append("Rare Sword")
        print("\nThanks Rajegh warrior")
        time.sleep(1.5)
        menu_player()
    elif pilihan_M == "5" and Player.mora >= 10:
        Player.mora -= 10
        if Player.weapon:
            Player.atk = 10
            replace_weapon = input(
                "\nYou already have a weapon. Do you want to replace it? (y/n): "
            )
            if replace_weapon.lower() == "y":
                old_weapon = Player.weapon.pop()
                print(f"You discarded your old weapon ({old_weapon})")
                gacha_result = random.choice(
                    [
                        "Common bow",
                        "Rare bow",
                        "Common Sword",
                        "Rare Sword",
                        "Legendary Bow",
                        "Legendary Sword",
                    ]
                )
                Player.weapon.append(gacha_result)
                if "Common bow" in gacha_result:
                    Player.atk += 10
                elif "Rare bow" in gacha_result:
                    Player.atk += 50
                elif "Common Sword" in gacha_result:
                    Player.atk += 10
                elif "Rare Sword" in gacha_result:
                    Player.atk += 50
                elif "Legendary Bow" in gacha_result:
                    Player.atk += 150
                elif "Legendary Sword" in gacha_result:
                    Player.atk += 150
                print(f"\nCongratulations! You got a {gacha_result}")
                time.sleep(2)
                menu_player()
            else:
                print("\nYou chose to keep your current weapon.")
                Player.mora = temp_mora
                Player.atk = temp_atk
                Player.weapon = temp_weapon
                time.sleep(1.5)
                menu_player()
                return
        else:
            gacha_result = random.choice(
                [
                    "Common bow",
                    "Rare bow",
                    "Common Sword",
                    "Rare Sword",
                    "Legendary Bow",
                    "Legendary Sword",
                ]
            )
            Player.weapon.append(gacha_result)
            if "Common bow" in gacha_result:
                Player.atk += 10
            elif "Rare bow" in gacha_result:
                Player.atk += 50
            elif "Common Sword" in gacha_result:
                Player.atk += 10
            elif "Rare Sword" in gacha_result:
                Player.atk += 50
            elif "Legendary Bow" in gacha_result:
                Player.atk += 150
            elif "Legendary Sword" in gacha_result:
                Player.atk += 150
            print(f"\nCongratulations! You got a {gacha_result}")
            time.sleep(1)
            menu_player()
    elif pilihan_M.lower() == "q":
        print(f"\nThanks For Stopping By Rajegh warrior{Style.RESET_ALL}")
        time.sleep(1)
        menu_player()
    else:
        print(f"\nYou don't have enough money!{Style.RESET_ALL}")
        Player.mora = temp_mora
        Player.atk = temp_atk
        Player.weapon = temp_weapon
        time.sleep(1)
        menu_player()


def Tavern():
    os.system("cls")
    print(f"{Fore.GREEN}Hello Rajegh Warrior, Welcome To The Tavern")
    time.sleep(1)
    print(f"You Need Something?{Style.RESET_ALL}\n")
    time.sleep(1)
    print(f"{Fore.RED}1. Mie Rajegh         (+50 HP)\t\t    (10 Mora){Style.RESET_ALL}")
    print(f"{Fore.BLUE}2. Air Putih          (Just normal water)   (15 Mora){Style.RESET_ALL}")
    print(f"{Fore.YELLOW}3. Sprite             (+50 SP)\t\t    (10 Mora){Style.RESET_ALL}")
    print(f"{Fore.RED}4. Health Potion      (+100 HP)\t\t    (25 Mora){Style.RESET_ALL}")
    print(f"{Fore.YELLOW}5. Skill Point Potion (+100 SP)\t\t    (25 Mora){Style.RESET_ALL}")
    print(f"{Fore.GREEN}q. Exit Tavern\n")
    time.sleep(1)
    pilihan_T = input(f"What's your choice, Rajegh? : ")

    if pilihan_T == "1" and Player.mora >= 10 and Player.hp < 100:
        Player.mora -= 10
        Player.hp += 50
        if Player.hp > 100:
            Player.hp = 100
        print("Thanks, Rajegh warrior!")
        time.sleep(1)
        menu_player()
    elif pilihan_T == "2" and Player.mora >= 15:
        Player.mora -= 15
        print("Thanks, Rajegh warrior!")
        time.sleep(1)
        menu_player()
    elif pilihan_T == "3" and Player.mora >= 10 and Player.sp < 100:
        Player.mora -= 10
        Player.sp += 50
        if Player.sp > 100:
            Player.sp = 100
        print("Thanks, Rajegh warrior!")
        time.sleep(1)
        menu_player()
    elif pilihan_T == "4" and Player.mora >= 25 and Player.hp < 100:
        Player.mora -= 25
        Player.hp += 100
        if Player.hp > 100:
            Player.hp = 100
        print("Thanks, Rajegh warrior!")
        time.sleep(1)
        menu_player()
    elif pilihan_T == "5" and Player.mora >= 25 and Player.sp < 100:
        Player.mora -= 25
        Player.sp += 100
        if Player.sp > 100:
            Player.sp = 100
        print("Thanks, Rajegh warrior!")
        time.sleep(1)
        menu_player()
    elif pilihan_T.lower() == "q":
        print(f"Thanks For Stopping By, Rajegh warrior{Style.RESET_ALL}")
        time.sleep(1)
        menu_player()
    else:
        if Player.mora < 10:
            print("You don't have enough mora!")
        elif pilihan_T in ["1", "3"] and (Player.hp >= 100 or Player.sp >= 100):
            print("Your HP or SP is already full. You can't buy this potion.")
        else:
            print("Invalid choice or not enough mora. Try again.")
        time.sleep(1)
        menu_player()


def menu_player():
    os.system("cls")
    print(f"\n{Fore.BLUE}Menu :\n")
    print("1. Check Stat")
    print("2. Go to Tavern")
    print("3. Go to Market")
    print("4. Backpack")
    print("5. Map")
    print("6. Exit\n")
    pilihan_P = input("Massukan pilihan : ")

    if pilihan_P == "1":
        os.system("cls")
        Player.print_stats()
        menu_player()
    elif pilihan_P == "2":
        Tavern()
    elif pilihan_P == "3":
        Market()
    elif pilihan_P == "4":
        Backpack()
    elif pilihan_P == "5":
        Map()
    else:
        print("See You Soon Rajegh")
        exit()


def main():
    os.system("cls")
    print(f"{Fore.BLUE}======== Rajegh Warrior Adventure ========\n")
    Name = input("Enter Name (max 20 characters): ")[:20]
    Player.name = Name
    print(f"\nChoose Role:")
    print("\n1. Ksatria")
    print("2. Pemanah")
    print("3. Medis")
    print("4. Keluar")
    pilihan = int(input(f"\nMassukan pilihan : "))

    if pilihan == 1:
        os.system("cls")
        print("Role Anda Ksatria")
        Player.role = "Ksatria"
        time.sleep(1)
        menu_player()
    elif pilihan == 2:
        os.system("cls")
        print("Role Anda Pemanah")
        Player.role = "Pemanah"
        time.sleep(1)
        menu_player()
    elif pilihan == 3:
        os.system("cls")
        print("Role Anda Medis")
        Player.role = "Medis"
        time.sleep(1)
        menu_player()
    else:
        os.system("cls")
        print("Goodbye Rajegh")
        time.sleep(1)
        exit()


if __name__ == "__main__":
    main()
