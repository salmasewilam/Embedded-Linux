import webbrowser

fav={
    "Facebook":'https://www.facebook.com/',
    "Twitter":'https://twitter.com/',
    "Youtube":'https://www.youtube.com/'
}
print(fav.keys())
x=input("please enter the websites   ")
webbrowser.get('google-chrome').open_new_tab(fav[x])