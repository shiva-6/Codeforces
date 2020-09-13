#codeforces

Solutions to solved codeforces problems# VolunteeringAppBackend

### Organization API
* __endpoint__ -  /api/org/createActivity\
__method__ - POST\
__usage__ - Creates a new activity\
__body__ - { type , description, location, time }\
__response__ - { objectid } if successfull else error

* __endpoint__ -  /api/org/getVolunteers?activityId\
__method__ - GET\
__usage__ - Fetches all the volunteers applied for a particular created activity\
__body__ - { }\
__response__ - { name, bio, location, rating } if successfull else error

* __endpoint__ -  /api/org/rateVolunteers\
__method__ - UPDATE\
__usage__ - Rates volunteers according to the performance\
__body__ - { volunteerId, Rating }\
__response__ - { ...body } if successfull else error

* __endpoint__ -  /api/org/getActivityStatus?activityId\
__method__ - GET\
__usage__ - Checks the status of the Activity\
__body__ - { }\
__response__ - { status } if successfull else error

* __endpoint__ -  /api/org/getActivities\
__method__ - GET\
__usage__ - Gets all the activities posted by user\
__body__ - { }\
__response__ - { activities : [ { activityId, type, description, location, time }, ...] } if successfull else error

* __endpoint__ - /api/org/createUser\
__method__ - POST\
__usage__ - Creates a organizer\
__body__ - { username, password, phonenumber }\
__response__ - {...body} if successfull else error


### Volunteers API
* __endpoint__ - /api/vol/getActivities?type&location&time\
__method__ - GET\
__usage__ - Get all the activities around me based on location, type of activity and the time of the activity.\
__body__ - { }\
__response__ - { activities : [ { activityId, type, description, location, time }, ...] } if successfull else error

* __endpoint__ - /api/vol/joinActivity\
__method__ - UPDATE\
__usage__ - Confirm to join a activity\
__body__ - { activityId }\
__response__ - {...body} if successfull else error

* __endpoint__ - /api/vol/createUser\
__method__ - POST\
__usage__ - Creates a volunteer\
__body__ - { username, password, phonenumber }\
__response__ - {...body} if successfull else error


### Status Codes
![Api Status Codes](/images/statusCodes.jpg)