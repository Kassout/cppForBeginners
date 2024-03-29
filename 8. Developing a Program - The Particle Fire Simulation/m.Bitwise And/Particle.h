
#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace caveofprogramming {

	// In struct, variables are public by default
	struct Particle {
		double m_x;
		double m_y;

		double m_speed;
		double m_direction;

	public:
		Particle();
		virtual ~Particle();
		void update(int interval);
	};
} /* namespace caveofprogramming */

#endif /* PARTICLE_H_*/