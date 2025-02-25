/* -------------------------------------------------------------------------*
 *								SPHinXsys									*
 * -------------------------------------------------------------------------*
 * SPHinXsys (pronunciation: s'finksis) is an acronym from Smoothed Particle*
 * Hydrodynamics for industrial compleX systems. It provides C++ APIs for	*
 * physical accurate simulation and aims to model coupled industrial dynamic*
 * systems including fluid, solid, multi-body dynamics and beyond with SPH	*
 * (smoothed particle hydrodynamics), a meshless computational method using	*
 * particle discretization.													*
 *																			*
 * SPHinXsys is partially funded by German Research Foundation				*
 * (Deutsche Forschungsgemeinschaft) DFG HU1527/6-1, HU1527/10-1,			*
 *  HU1527/12-1 and HU1527/12-4												*
 *                                                                          *
 * Portions copyright (c) 2017-2022 Technical University of Munich and		*
 * the authors' affiliations.												*
 *                                                                          *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may  *
 * not use this file except in compliance with the License. You may obtain a*
 * copy of the License at http://www.apache.org/licenses/LICENSE-2.0.       *
 *                                                                          *
 * ------------------------------------------------------------------------*/
/**
 * @file 	general_diffusion_reaction_dynamics.hpp
 * @author	Chi Zhang and Xiangyu Hu
 */

#ifndef GENERAL_DIFFUSION_REACTION_DYNAMICS_HPP
#define GENERAL_DIFFUSION_REACTION_DYNAMICS_HPP

#include "general_diffusion_reaction_dynamics.h"

namespace SPH
{
//=================================================================================================//
template <class ParticlesType>
DiffusionReactionInitialCondition<ParticlesType>::
    DiffusionReactionInitialCondition(SPHBody &sph_body)
    : LocalDynamics(sph_body),
      DiffusionReactionSimpleData<ParticlesType>(sph_body),
      pos_(this->particles_->pos_), all_species_(this->particles_->all_species_) {}
//=================================================================================================//
} // namespace SPH
#endif // GENERAL_DIFFUSION_REACTION_DYNAMICS_HPP