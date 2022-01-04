#Hey There
#If you don't understand the Code don't worry i'm like i can't undestand what i wrote
#this By SomeOne
import mss.tools
import mss
from selenium import webdriver
import pyautogui
from teleg import tgramsend as teleg
from webdriver_manager.chrome import ChromeDriverManager
from destroy import yah as yah
from selenium.webdriver.common.keys import Keys
import time
import timeit
import datetime
from selenium.webdriver.chrome.options import Options
import os
from inputimeout import inputimeout, TimeoutOccurred
from twilio.rest import Client
import random
import urllib
from selenium.webdriver.common.by import By
import sys


def main():
    everything = 0
    print("enter the email :")
    try:
        x = inputimeout(prompt='', timeout=1)
    except TimeoutOccurred:
        x = ""
    print("enter the password :")
    try:
        y = inputimeout(prompt='', timeout=1)
    except TimeoutOccurred:
        y = ""
    print("enter the key :")
    try:
        z = inputimeout(prompt='timeout\n', timeout=1)
    except TimeoutOccurred:
        z = ""
    z = "S'inscrire"  # theeeeeeeee key is here
    while (everything == 0):
        access(x, y, z, everything)


def login(browser, email, password, Key, everything):
    browser.get("https://candidature.1337.ma/users/sign_in")
    time.sleep(2)
    usernamek = browser.find_element_by_id("user_email")
    passwordk = browser.find_element_by_id("user_password")
    #YOUR USERNAME GOES HERE
    if (email == ""): email = "hossam.dagdag@gmail.com"
    if (password == ""): password = "Casa101010@gmail.com"
    usernamek.send_keys(email)
    passwordk.send_keys(password)
    time.sleep(1.4)
    browser.find_element_by_xpath("//input[@value='Sign in']").click()
    #passwordk.send_keys(Keys.RETURN)
    time.sleep(2)
    try:
      but=browser.find_element_by_link_text("Profil")      
    except:
      but=browser.find_element_by_link_text("Profile")
    


def refresh(browser, Key, everything, thistime, start):
    thistime += 1

    def changekey(Key):
        print("enter the new key")
        Key = input()
        return Key
    browser.refresh()
    try:
        browser.find_element_by_link_text("Je refuse").click()
    except:
        try:
            browser.find_element_by_link_text("Deny").click()
        except:
            pass
    time.sleep(4.5)
    time.sleep(4.5)
    time.sleep(4.5)
    try:
        try:
            try:
                try:
                    Subscribe = browser.find_element_by_link_text(Key)
                except:
                    browser.find_element_by_xpath("//input[@value='Register']")
            except:
                browser.find_element_by_xpath("//input[@value='S'inscrire']")
        except:
          Subscribe = browser.find_element_by_link_text("Register")
    except:  
        runtime = timeit.default_timer() - start
        runtime = int(runtime)
        if(thistime%10==0 or thistime==1):
          with open('data.txt', 'a') as f:
              original_stdout = sys.stdout
              sys.stdout = f
              print("this number ", thistime, " that we didn't find '", Key,
                    "' after ", str(datetime.timedelta(seconds=runtime)), "\n")
              sys.stdout = original_stdout
        print("\nthis number ", thistime, " that we didn't find '", Key,
              "' after ", str(datetime.timedelta(seconds=runtime)), "\n")
        k = '0'
        print("do you want to change the key press any button ", end=' ')
        try:
            k = inputimeout(prompt='', timeout=3)
        except TimeoutOccurred:
            k = '0'
        if (k != '0'):
            Key = changekey(Key)
            refresh(browser, Key, everything, thistime, start)
        print("  * Sleep time ")
        try:
          Key = inputimeout(prompt='                                 *************\n', timeout=12)
        except TimeoutOccurred:
          pass
        if(thistime%350==0 or thistime==1):
          txt="This is the number : " + str(thistime)+" Time is : " +str(datetime.timedelta(seconds=runtime))
          teleg("+212766673084",txt,False,"0")
        refresh(browser, Key, everything, thistime, start)

    try:
        solve(browser, Key, everything)
    except:
        refresh(browser, Key, everything, thistime, start)
    time.sleep(2)
    browser.switch_to.default_content()
    try:
        try:
            try:
                try:
                    Subscribe = browser.find_element_by_link_text(Key)
                except:
                    Subscribe =browser.find_element_by_xpath("//input[@value='Register']")
            except:
                Subscribe =browser.find_element_by_xpath("//input[@value='S'inscrire']")
        except:
          Subscribe = browser.find_element_by_link_text("Register")
    except:
        refresh(browser, Key, everything, thistime, start)          
    time.sleep(2)
    Subscribe.click()
    time.sleep(2)
    time.sleep(2)
    time.sleep(2)
    browser.save_screenshot("Capture.png")
    sendmsg("you did it sir checki HAHAHHA ASAP","+212766673084")
    sendmsg("you did it sir checki HAHAHHA ASAP","+212682233288")
    #client.send_file(phone, 'Capture.png')
    #client.send_message(phone, message)
    print("\n\n\n ****************    You Did It**************")
    teleg("+212766673084","bot : safi chadit lik check in ",True,"Capture.png")
    #call()
    Key = '0000000'
    everything = 12
    yah()


def solve(browser, Key, everything):
    sendmsg("L9ayt Register ","+212766673084")

    time.sleep(1)
    try:
        time.sleep(3)  
        g_recaptcha = browser.find_elements_by_class_name('g-recaptcha')[0]
    except:
        return('g-recaptcha')[0]
    outerIframe = g_recaptcha.find_element_by_tag_name('iframe')
    time.sleep(5)
    outerIframe.click()
    iframes = browser.find_elements_by_tag_name('iframe')
    if (iframes): hardsolve(browser, Key, everything)
    else:
        browser.get(
            "https://c.tenor.com/SsoxA692Jo4AAAAM/congrats-congratulations.gif"
        )


def hardsolve(browser, Key, everything):
    audioToTextDelay = 10
    delayTime = 2
    audioFile = "\\payload.mp3"
    SpeechToTextURL = "https://speech-to-text-demo.ng.bluemix.net/"

    def delay():
        time.sleep(random.randint(1, 2))

    def audioToText(audioFile):
        browser.execute_script('''window.open("","_blank")''')
        browser.switch_to.window(browser.window_handles[1])
        browser.get(SpeechToTextURL)
        delay()
        delay()
        audioInput = browser.find_element(By.XPATH,
                                          '//*[@id="root"]/div/input')
        audioInput.send_keys(audioFile)

        time.sleep(audioToTextDelay)

        text = browser.find_element(
            By.XPATH, '//*[@id="root"]/div/div[7]/div/div/div/span')
        while text is None:
            text = browser.find_element(
                By.XPATH, '//*[@id="root"]/div/div[7]/div/div/div/span')

        result = text.text

        browser.close()
        browser.switch_to.window(browser.window_handles[0])

        return result

    delay()
    iframes = browser.find_elements_by_tag_name('iframe')
    audioBtnFound = False
    audioBtnIndex = -1

    for index in range(len(iframes)):
        browser.switch_to.default_content()
        iframe = browser.find_elements_by_tag_name('iframe')[index]
        browser.switch_to.frame(iframe)
        browser.implicitly_wait(delayTime)
        try:
            audioBtn = browser.find_element_by_id("recaptcha-audio-button")
            audioBtn.click()
            audioBtnFound = True
            audioBtnIndex = index
            break
        except:
            pass

    if audioBtnFound:
        try:
            while True:
                # get the mp3 audio file
                src = browser.find_element_by_id("audio-source").get_attribute(
                    "src")
                print("[INFO] Audio src: %s" % src)

                # download the mp3 audio file from the source
                urllib.request.urlretrieve(src, os.getcwd() + audioFile)

                # Speech To Text Conversion
                tkey = audioToText(os.getcwd() + audioFile)
                print("[INFO] Recaptcha Key: %s" % tkey)

                browser.switch_to.default_content()
                iframe = browser.find_elements_by_tag_name(
                    'iframe')[audioBtnIndex]
                browser.switch_to.frame(iframe)

                # key in results and submit
                inputField = browser.find_element_by_id("audio-response")
                inputField.send_keys(tkey)
                delay()
                inputField.send_keys(Keys.ENTER)
                delay()

                err = browser.find_element_by_id("recaptcha-audio-button")
                if err.text == "" or err.value_of_css_property(
                        'display') == 'none':
                    print("[INFO] Success!")
                    break

        except:
            print("\n\n\n Probleme in audio do it again\n\n")
            refresh(browser, Key, everything)


def access(email, password, Key, everything):


    if(Key == '0000000'):yah()
    browser =  webdriver.Chrome(ChromeDriverManager().install())
    try:
        login(browser, email, password, Key, everything)
    except:
        time.sleep(3)
        print(
            "Your data it's not correct\nplease entre the correct data or close app untilyou solve the probleme"
        )
        time.sleep(3)
        access(email, password, Key, everything)
    thistime = 0
    start = timeit.default_timer()
    refresh(browser, Key, everything, thistime, start)


def sendmsg(msg,numero):
    account_sid = "ACafd038e072ed905f0b6b5529f2345123"
    auth_token = "07e4f23f190b69bcdc57923aa8c52acb"
    client = Client(account_sid, auth_token)
    client.messages.create(to=numero, from_="+12189673213", body=msg)
def call():
  account_sid = "ACafd038e072ed905f0b6b5529f2345123"
  auth_token = "07e4f23f190b69bcdc57923aa8c52acb"
  client = Client(account_sid, auth_token)

  call = client.calls.create(
                          url='http://demo.twilio.com/docs/voice.xml',
                          to='+212766673084',
                          from_='+12189673213'
                      )

  print(call.sid)

def starty():
        #yah()
        #k_a.keep_alive()
        #call()
        g = open('anytime.txt', 'r')
        k = g.readline()
        g.close()
        try:
            o = int(k) + 1
        except:
            o = 0
        sts = str(o)
        file1 = open("anytime.txt", "w")
        file1.writelines(sts)
        file1.close()
        try:
            main()
        except:
            teleg("+212766673084"," the bot has a problem ",False,"0")
            try:
                os.remove('EROOR.png')
            except Exception as e:
                pass
            with mss.mss() as sct:
                monitor = {"top": 450, "left": 300, "width": 900, "height": 300}
                output = "EROOR.png"
                sct_img = sct.grab(monitor)
                mss.tools.to_png(sct_img.rgb, sct_img.size, output=output)
                print(output)
        

        print("the bot stoped  ")
        teleg("+212766673084"," the bot stoped ",True,"EROOR.png")
