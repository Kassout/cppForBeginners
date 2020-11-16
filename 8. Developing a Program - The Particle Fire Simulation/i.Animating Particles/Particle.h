
#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace caveofprogramming {

	// In struct, variables are public by default
	struct Particle {
		double m_x;
		double m_y;

		double m_xspeed;
		double m_yspeed;

	public:
		Particle();
		virtual ~Particle();
		void update();
	};
} /* namespace caveofprogramming */

#endif /* PARTICLE_H_*/