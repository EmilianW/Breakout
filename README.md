# Breakout

W Kavanagh. June Summer 2024

## controls

A/D to move the paddle right and left.
P to pause.

## Powerups

big/small paddle (blue)
fast/slow ball (fancy yellow)
fire ball (green)

# Tasklist

## Suggested fixes

* Fix the compiler issues in the code

## Suggested tasks

* Implement mouse input for pad
* Improved VFX (ball trail, paddle hit response, brick particle destruction)
* Better UI (progress bar rather than timer for countdown).
* GameLoop
* Better ball physics (Box2D)
* Leaderboards
* More ball types (e.g., multiball, sticky ball [where you shoot the ball from the paddle every time], tiny ball, big ball, brick-tracking ball)
* Sounds with increasing tone between bounces.
* Implement commentary with calls to an LLM such as LLama

# Time Details and Changelist
18/10 15:00 - 15:19 Fixed compile issue
22/10 11:00 - 12:00 Created a Box2D static library
22/10 12:00 - 13:44 Set up the project for use with Box2D
22/10 13:44 - 14:00 Set up a rigid body for the paddle
22/10 14:00 - 14:08 Set up a rigid body for the ball
22/10 14:08 - 14:50 Added a helper class for converting vectors. Updating rigid bodies on every frame
23/10 10:04 - 10:06 Removed simple ball physics
