import gym

if __name__ == '__main__':
	env =gym.make('CartPole-v0')

	for i_episode in range(200):
		observation = env.reset()
		rewards = 0;
		for t in range(250):
			env.render()

			action = env.action_space.sample()
			observation, reward, done, info = env.step(action)
			rewards += reward

			if done:
				print('Episode finished after {} timesteps, total rewards {}'.format(t+1, rewards))
				break
	env.close()
