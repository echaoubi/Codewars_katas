def call(nmbr):
  account_sid = "XXXXXXXXXXXXXXX"
  auth_token = "XXXXXXXXXXXXXXX"
  client = Client(account_sid, auth_token)

  call = client.calls.create(
                          url='http://demo.twilio.com/docs/voice.xml',
                          to=nmbr,
                          from_='+XXXXXXXXX'
                      )

  print(call.sid)
