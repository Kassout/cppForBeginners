#include "Swarm.h"

namespace caveofprogramming {

	Swarm::Swarm() {
		m_pParticles = new Particle[NPARTICLES];
	}

	Swarm::~Swarm() {
		// TODO Auto-generated destructor stub
	}
} /* namespace caveofprogramming */