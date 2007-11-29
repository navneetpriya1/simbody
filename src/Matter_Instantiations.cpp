/* -------------------------------------------------------------------------- *
 *                      SimTK Core: SimTK Simbody(tm)                         *
 * -------------------------------------------------------------------------- *
 * This is part of the SimTK Core biosimulation toolkit originating from      *
 * Simbios, the NIH National Center for Physics-Based Simulation of           *
 * Biological Structures at Stanford, funded under the NIH Roadmap for        *
 * Medical Research, grant U54 GM072970. See https://simtk.org.               *
 *                                                                            *
 * Portions copyright (c) 2008-9 Stanford University and the Authors.         *
 * Authors: Michael Sherman                                                   *
 * Contributors:                                                              *
 *                                                                            *
 * Permission is hereby granted, free of charge, to any person obtaining a    *
 * copy of this software and associated documentation files (the "Software"), *
 * to deal in the Software without restriction, including without limitation  *
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,   *
 * and/or sell copies of the Software, and to permit persons to whom the      *
 * Software is furnished to do so, subject to the following conditions:       *
 *                                                                            *
 * The above copyright notice and this permission notice shall be included in *
 * all copies or substantial portions of the Software.                        *
 *                                                                            *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR *
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,   *
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL    *
 * THE AUTHORS, CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,    *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR      *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE  *
 * USE OR OTHER DEALINGS IN THE SOFTWARE.                                     *
 * -------------------------------------------------------------------------- */


#include "SimTKcommon.h"
#include "simbody/internal/common.h"
#include "SimTKcommon/internal/PrivateImplementation_Defs.h"

// This suppresses the 'extern template' instantiations in Motion.h so that
// we can instantiate them for real here.
#define SimTK_SIMBODY_DEFINING_MOTION
#include "simbody/internal/Motion.h"
#include "MotionImpl.h"

// This suppresses the 'extern template' instantiations in MobilizedBody.h so that
// we can instantiate them for real here.
#define SimTK_SIMBODY_DEFINING_MOBILIZED_BODY
#include "simbody/internal/MobilizedBody.h"
#include "MobilizedBodyImpl.h"

// This suppresses the 'extern template' instantiations in Constraint.h so that
// we can instantiate them for real here.
#define SimTK_SIMBODY_DEFINING_CONSTRAINT
#include "simbody/internal/Constraint.h"
#include "ConstraintImpl.h"


namespace SimTK {

    // Motion
template class PIMPLHandle<Motion, MotionImpl, true>;
template class PIMPLImplementation<Motion, MotionImpl>;

    // MobilizedBody
template class PIMPLHandle<MobilizedBody, MobilizedBodyImpl, true>;
template class PIMPLImplementation<MobilizedBody, MobilizedBodyImpl>;
template class PIMPLHandle<MobilizedBody::Custom::Implementation, MobilizedBody::Custom::ImplementationImpl>;
template class PIMPLImplementation<MobilizedBody::Custom::Implementation, MobilizedBody::Custom::ImplementationImpl>;

    // Constraint
template class PIMPLHandle<Constraint, ConstraintImpl, true>;
template class PIMPLImplementation<Constraint, ConstraintImpl>;
template class PIMPLHandle<Constraint::Custom::Implementation, Constraint::Custom::ImplementationImpl>;
template class PIMPLImplementation<Constraint::Custom::Implementation, Constraint::Custom::ImplementationImpl>;

} // namespace SimTK
